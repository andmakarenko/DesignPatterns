#pragma once


class ComponentWithContextualHelp
{
public:
	virtual ComponentWithContextualHelp* setNext(ComponentWithContextualHelp* handler) = 0;
	virtual void showHelp() const = 0;
};