#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Linq::Expressions::ExpressionType::ExpressionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Linq::Expressions::ExpressionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Linq::Expressions::ExpressionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Add{0};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::AddChecked{1};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::And{2};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::AndAlso{3};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ArrayLength{4};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ArrayIndex{5};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Call{6};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Coalesce{7};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Conditional{8};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Constant{9};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Convert{10};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ConvertChecked{11};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Divide{12};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Equal{13};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ExclusiveOr{14};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::GreaterThan{15};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::GreaterThanOrEqual{16};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Invoke{17};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Lambda{18};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::LeftShift{19};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::LessThan{20};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::LessThanOrEqual{21};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ListInit{22};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::MemberAccess{23};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::MemberInit{24};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Modulo{25};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Multiply{26};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::MultiplyChecked{27};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Negate{28};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::UnaryPlus{29};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::NegateChecked{30};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::New{31};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::NewArrayInit{32};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::NewArrayBounds{33};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Not{34};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::NotEqual{35};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Or{36};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::OrElse{37};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Parameter{38};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Power{39};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Quote{40};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::RightShift{41};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Subtract{42};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::SubtractChecked{43};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::TypeAs{44};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::TypeIs{45};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Assign{46};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Block{47};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::DebugInfo{48};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Decrement{49};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Dynamic{50};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Default{51};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Extension{52};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Goto{53};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Increment{54};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Index{55};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Label{56};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::RuntimeVariables{57};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Loop{58};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Switch{59};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Throw{60};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Try{61};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::Unbox{62};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::AddAssign{63};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::AndAssign{64};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::DivideAssign{65};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ExclusiveOrAssign{66};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::LeftShiftAssign{67};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::ModuloAssign{68};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::MultiplyAssign{69};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::OrAssign{70};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::PowerAssign{71};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::RightShiftAssign{72};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::SubtractAssign{73};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::AddAssignChecked{74};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::MultiplyAssignChecked{75};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::SubtractAssignChecked{76};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::PreIncrementAssign{77};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::PreDecrementAssign{78};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::PostIncrementAssign{79};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::PostDecrementAssign{80};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::TypeEqual{81};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::OnesComplement{82};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::IsTrue{83};
constexpr System::Linq::Expressions::ExpressionType  System::Linq::Expressions::ExpressionType::IsFalse{84};
