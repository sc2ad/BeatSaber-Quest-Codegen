#pragma once
#include "System/Reflection/zzzz__ExceptionHandlingClause_def.hpp"
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::Reflection::ExceptionHandlingClause._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::ExceptionHandlingClause::*)()>(&System::Reflection::ExceptionHandlingClause::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::ExceptionHandlingClause>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Reflection::ExceptionHandlingClause.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::ExceptionHandlingClause::*)()>(&System::Reflection::ExceptionHandlingClause::ToString)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x238480c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Reflection::ExceptionHandlingClause),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::ExceptionHandlingClause>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Reflection::ExceptionHandlingClause::__set_catch_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::ExceptionHandlingClause::__get_catch_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_filter_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClause::__get_filter_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_flags(System::Reflection::ExceptionHandlingClauseOptions value)  {
::cordl_internals::setInstanceField<System::Reflection::ExceptionHandlingClauseOptions, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::ExceptionHandlingClauseOptions>(value));
}
constexpr System::Reflection::ExceptionHandlingClauseOptions System::Reflection::ExceptionHandlingClause::__get_flags() const {
return ::cordl_internals::getInstanceField<System::Reflection::ExceptionHandlingClauseOptions, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_try_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClause::__get_try_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_try_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClause::__get_try_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_handler_offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClause::__get_handler_offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Reflection::ExceptionHandlingClause::__set_handler_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClause::__get_handler_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Reflection::ExceptionHandlingClause System::Reflection::ExceptionHandlingClause::New_ctor()  {
System::Reflection::ExceptionHandlingClause o{THROW_UNLESS(::il2cpp_utils::New<System::Reflection::ExceptionHandlingClause>())};
return o;
}
 void System::Reflection::ExceptionHandlingClause::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::ExceptionHandlingClause>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Reflection::ExceptionHandlingClause::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Reflection::ExceptionHandlingClause>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
