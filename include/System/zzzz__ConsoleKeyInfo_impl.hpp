#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ConsoleKeyInfo_def.hpp"
#include "System/zzzz__ConsoleKey_def.hpp"
#include "System/zzzz__ConsoleModifiers_def.hpp"
//  Writing Method size for method: System::ConsoleKeyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ConsoleKeyInfo::*)(char16_t, System::ConsoleKey, bool, bool, bool)>(&System::ConsoleKeyInfo::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2461920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleKeyInfo.get_KeyChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (System::ConsoleKeyInfo::*)()>(&System::ConsoleKeyInfo::get_KeyChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24619c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "get_KeyChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleKeyInfo.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ConsoleKey (System::ConsoleKeyInfo::*)()>(&System::ConsoleKeyInfo::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24619d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleKeyInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ConsoleKeyInfo::*)(::bs_hook::Il2CppWrapperType)>(&System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24619d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ConsoleKeyInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleKeyInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ConsoleKeyInfo::*)(System::ConsoleKeyInfo)>(&System::ConsoleKeyInfo::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2461a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleKeyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ConsoleKeyInfo.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ConsoleKeyInfo::*)()>(&System::ConsoleKeyInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2461aa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ConsoleKeyInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_keyChar", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_key", ty: "System::ConsoleKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mods", ty: "System::ConsoleModifiers", modifiers: "", def_value: Some("{}") }]
constexpr System::ConsoleKeyInfo::ConsoleKeyInfo(char16_t _keyChar, System::ConsoleKey _key, System::ConsoleModifiers _mods) noexcept : ::bs_hook::ValueTypeWrapper() {this->_keyChar = _keyChar;
this->_key = _key;
this->_mods = _mods;
}
constexpr void System::ConsoleKeyInfo::__set__keyChar(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t System::ConsoleKeyInfo::__get__keyChar() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void System::ConsoleKeyInfo::__set__key(System::ConsoleKey value)  {
::cordl_internals::setInstanceField<System::ConsoleKey, 0x4>(this->__instance, std::forward<System::ConsoleKey>(value));
}
constexpr System::ConsoleKey System::ConsoleKeyInfo::__get__key() const {
return ::cordl_internals::getInstanceField<System::ConsoleKey, 0x4>(this->__instance);
}
constexpr void System::ConsoleKeyInfo::__set__mods(System::ConsoleModifiers value)  {
::cordl_internals::setInstanceField<System::ConsoleModifiers, 0x8>(this->__instance, std::forward<System::ConsoleModifiers>(value));
}
constexpr System::ConsoleModifiers System::ConsoleKeyInfo::__get__mods() const {
return ::cordl_internals::getInstanceField<System::ConsoleModifiers, 0x8>(this->__instance);
}
 void System::ConsoleKeyInfo::_ctor(char16_t keyChar, System::ConsoleKey key, bool shift, bool alt, bool control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, keyChar, key, shift, alt, control);
}
 char16_t System::ConsoleKeyInfo::get_KeyChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "get_KeyChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ConsoleKey System::ConsoleKeyInfo::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ConsoleKey, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool System::ConsoleKeyInfo::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool System::ConsoleKeyInfo::Equals(System::ConsoleKeyInfo obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ConsoleKeyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t System::ConsoleKeyInfo::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ConsoleKeyInfo>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
