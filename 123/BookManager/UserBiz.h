#include "User.h"
class UserBiz{
public:
	//新增  1成功 0失败
	int add(User &user);
	//修改  1成功 0失败
	int update(User &user);
	//删除  1成功 0失败
	int deleteById(int id);
	//根据编号查找某个信息
	User findById(int id);
	//找出所有信息
	void findAll();
};
