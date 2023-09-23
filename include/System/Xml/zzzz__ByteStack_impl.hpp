#pragma once
#include "System/Xml/zzzz__ByteStack_def.hpp"
//  Writing Method size for method: System::Xml::ByteStack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::ByteStack::*)(int32_t)>(&System::Xml::ByteStack::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26bbed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::ByteStack.Push
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::ByteStack::*)(uint8_t)>(&System::Xml::ByteStack::Push)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26bbf44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            "Push",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::ByteStack.Pop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Xml::ByteStack::*)()>(&System::Xml::ByteStack::Pop)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26bc014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            "Pop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::ByteStack::__set_stack(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> System::Xml::ByteStack::__get_stack() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::ByteStack::__set_growthRate(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::ByteStack::__get_growthRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::ByteStack::__set_top(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::ByteStack::__get_top() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Xml::ByteStack::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::ByteStack::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "growthRate", ty: "int32_t", modifiers: "", def_value: None }]
 System::Xml::ByteStack::ByteStack(int32_t growthRate)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ByteStack>(growthRate))) {}
 void System::Xml::ByteStack::_ctor(int32_t growthRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, growthRate);
}
 void System::Xml::ByteStack::Push(uint8_t data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            "Push",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 uint8_t System::Xml::ByteStack::Pop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::ByteStack>::get(),
                            "Pop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
