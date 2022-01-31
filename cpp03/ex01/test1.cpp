/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hryuuta <hryuuta@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:49:08 by hryuuta           #+#    #+#             */
/*   Updated: 2022/01/31 13:05:26 by hryuuta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Pencil
{
protected:
    int core;      // 鉛筆の芯の長さ
public:
    Pencil();
    ~Pencil();
    void Write()
    {
        core -= 1;   // 書くたびに芯が 1mm ずつ小さくなる
        if (core < 0) core = 0;
        std::cout << " Write() " << core << std::endl;
    }
};

class ErasePencil : public Pencil
{
private:
    int rubber;    // 消しゴムの大きさ
public:
    void Erase()
    {
        rubber -= 1;  // 消すたびにゴムが 1 立方mm ずつ小さくなる
        if (rubber < 0) rubber = 0;
        core += 1;
        std::cout << " Erase() " << core << std::endl;
    }
};

Pencil::Pencil(): core(20){}

Pencil::~Pencil() {}

int main() {
	ErasePencil pen;

	pen.Write();       // Pencil クラスから引き継いだメンバ関数の呼び出し
	pen.Write();       // Pencil クラスから引き継いだメンバ関数の呼び出し
	pen.Erase();       // ErasePencil クラスで新たに定義したメンバ関数の呼び出し
	pen.Erase();       // ErasePencil クラスで新たに定義したメンバ関数の呼び出し
	pen.Erase();       // ErasePencil クラスで新たに定義したメンバ関数の呼び出し
	pen.Erase();       // ErasePencil クラスで新たに定義したメンバ関数の呼び出し
}