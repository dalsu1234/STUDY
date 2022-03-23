#include <iostream>

const int QUEUE_SIZE{ 10 };
enum command {
	ENQUEUE = 1,
	DEQUEUE,
	EXIT
};

struct Queue
{
	int container[QUEUE_SIZE]{};
	int head{};
	int tail{};
};

void PtintInfo()
{
	std::cout << "<<QUEUE>>" << std::endl <<
		"[1] enqueue " << std::endl <<
		"[2] dequeue " << std::endl <<
		"[3] exit " << std::endl <<
		"------------" << std::endl;
}

void PrintQueue(Queue& queue)
{
	std::cout << "======queue=====" << std::endl;

	int i = queue.head;
	if (queue.head == queue.tail)//
	{
		std::cout << "empty" << std::endl;
		return;
	}
	while (i != queue.tail)//
	{
		i = (i + 1) % QUEUE_SIZE; //이게 원형큐에 핵심
		std::cout << queue.container[i] << " ";
	}
	std::cout << std::endl << " ========= " << std::endl;


}

void Enqueue(Queue& queue, int value)
{
	if ((queue.tail + 1) % QUEUE_SIZE == queue.head)
	{
		std::cout << "FULL!!" << std::endl;
		return;
	}

	queue.tail = (queue.tail + 1) % QUEUE_SIZE;
	queue.container[queue.tail] = value;
}

void Dequeue(Queue& queue)
{
	if (queue.head == queue.tail)
	{
		std::cout << "empty" << std::endl;
		return;
	}

	queue.head = (queue.head + 1) % QUEUE_SIZE;
	std::cout << queue.container[queue.head] << "is dequeue" << std::endl;
}

void ProcessUserInput(Queue& queue)
{
	int command{ -1 };
	bool isExit{ false };
	while (true)
	{
		PrintQueue(queue);

		std::cout << std::endl << " > ";
		std::cin >> command;

		switch (command)
		{
		case ENQUEUE:
		{
			int value;
			std::cout << "    value>>";
			std::cin >> value;
			Enqueue(queue, value);
			break;
		}
		case DEQUEUE:
			Dequeue(queue);
			break;
		case EXIT:
			isExit = true;
			break;
		default:
			std::cout << "wrong" << std::endl;
			break;
		}
		if (isExit)
		{
			break;
		}
	}
}
int main()
{
	Queue myqueue;
	PtintInfo();
	ProcessUserInput(myqueue);
}
