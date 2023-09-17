#pragma once
#include "System/Reflection/zzzz__LocalVariableInfo_impl.hpp"
namespace {
#include "System/Reflection/Emit/zzzz__LocalBuilder_def.hpp"
#include "System/Reflection/Emit/zzzz__ILGenerator_def.hpp"
constexpr void ::System::Reflection::Emit::LocalBuilder::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Reflection::Emit::LocalBuilder::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::Emit::LocalBuilder::__set_ilgen(::System::Reflection::Emit::ILGenerator value)  {
::cordl_internals::setInstanceField<::System::Reflection::Emit::ILGenerator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Reflection::Emit::ILGenerator>(value));
}
constexpr ::System::Reflection::Emit::ILGenerator ::System::Reflection::Emit::LocalBuilder::__get_ilgen() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Emit::ILGenerator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::Emit::LocalBuilder::__set_startOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::Emit::LocalBuilder::__get_startOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Reflection::Emit::LocalBuilder::__set_endOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::Emit::LocalBuilder::__get_endOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
