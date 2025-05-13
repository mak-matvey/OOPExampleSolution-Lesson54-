#include "Manager.h"

Group Manager::findBestStudents(Group group)
{
	float bestMark = 8.5;
	int bestCount = 0;

	for (int i = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark)
		{
			bestCount++;
		}
	}

	Group best(bestCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= bestMark)
		{
			best.set(j, group.get(i));
			j++;
		}
	}

	return best;
}

Group Manager::findWorstStudents(Group group)
{
	float worstMark = 6.0;
	int worstCount = 0;

	for (int i = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= worstMark)
		{
			worstCount++;
		}
	}

	Group worst(worstCount);

	for (int i = 0, j = 0; i < group.getCount(); i++)
	{
		if (group.get(i).getAverageMark() >= worstMark)
		{
			worst.set(j, group.get(i));
			j++;
		}
	}

	return worst;
}