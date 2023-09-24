#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__ConsoleCancelEventArgs_def.hpp"
#include "System/zzzz__ConsoleSpecialKey_def.hpp"
//  Writing Method size for method: System::ConsoleCancelEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ConsoleCancelEventArgs::*)(System::ConsoleSpecialKey)>(&System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2461874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleSpecialKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleCancelEventArgs.get_Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ConsoleCancelEventArgs::*)()>(&System::ConsoleCancelEventArgs::get_Cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24618e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            "get_Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleCancelEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ConsoleCancelEventArgs::*)()>(&System::ConsoleCancelEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24618e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ConsoleCancelEventArgs::__set__type(System::ConsoleSpecialKey value)  {
::cordl_internals::setInstanceField<System::ConsoleSpecialKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ConsoleSpecialKey>(value));
}
constexpr System::ConsoleSpecialKey System::ConsoleCancelEventArgs::__get__type() const {
return ::cordl_internals::getInstanceField<System::ConsoleSpecialKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ConsoleCancelEventArgs::__set__Cancel_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ConsoleCancelEventArgs::__get__Cancel_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::ConsoleCancelEventArgs System::ConsoleCancelEventArgs::New_ctor(System::ConsoleSpecialKey type)  {
System::ConsoleCancelEventArgs o{THROW_UNLESS(::il2cpp_utils::New<System::ConsoleCancelEventArgs>(type))};
return o;
}
 void System::ConsoleCancelEventArgs::_ctor(System::ConsoleSpecialKey type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleSpecialKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 bool System::ConsoleCancelEventArgs::get_Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            "get_Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ConsoleCancelEventArgs System::ConsoleCancelEventArgs::New_ctor()  {
System::ConsoleCancelEventArgs o{THROW_UNLESS(::il2cpp_utils::New<System::ConsoleCancelEventArgs>())};
return o;
}
 void System::ConsoleCancelEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleCancelEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
