#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
//  Writing Method size for method: System::UnhandledExceptionEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnhandledExceptionEventArgs::*)(::bs_hook::Il2CppWrapperType, bool)>(&System::UnhandledExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x245fb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::UnhandledExceptionEventArgs.get_ExceptionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245fbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            "get_ExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::UnhandledExceptionEventArgs.get_IsTerminating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::UnhandledExceptionEventArgs::*)()>(&System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245fbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            "get_IsTerminating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::UnhandledExceptionEventArgs::__set__exception(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::UnhandledExceptionEventArgs::__get__exception() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::UnhandledExceptionEventArgs::__set__isTerminating(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::UnhandledExceptionEventArgs::__get__isTerminating() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "exception", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "isTerminating", ty: "bool", modifiers: "", def_value: None }]
 System::UnhandledExceptionEventArgs::UnhandledExceptionEventArgs(::bs_hook::Il2CppWrapperType exception, bool isTerminating)  : System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<UnhandledExceptionEventArgs>(exception, isTerminating))) {}
 void System::UnhandledExceptionEventArgs::_ctor(::bs_hook::Il2CppWrapperType exception, bool isTerminating)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception, isTerminating);
}
 ::bs_hook::Il2CppWrapperType System::UnhandledExceptionEventArgs::get_ExceptionObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            "get_ExceptionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::UnhandledExceptionEventArgs::get_IsTerminating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::UnhandledExceptionEventArgs>::get(),
                            "get_IsTerminating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
