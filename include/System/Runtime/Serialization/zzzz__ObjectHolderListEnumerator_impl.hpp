#pragma once
#include "System/Runtime/Serialization/zzzz__ObjectHolderListEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolderList_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::ObjectHolderListEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ObjectHolderListEnumerator::*)(System::Runtime::Serialization::ObjectHolderList, bool)>(&System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2350ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolderList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectHolderListEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(&System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x234f9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::ObjectHolderListEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Serialization::ObjectHolder (System::Runtime::Serialization::ObjectHolderListEnumerator::*)()>(&System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x234f95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__set_m_isFixupEnumerator(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Serialization::ObjectHolderListEnumerator::__get_m_isFixupEnumerator() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__set_m_list(System::Runtime::Serialization::ObjectHolderList value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::ObjectHolderList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::ObjectHolderList>(value));
}
constexpr System::Runtime::Serialization::ObjectHolderList System::Runtime::Serialization::ObjectHolderListEnumerator::__get_m_list() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::ObjectHolderList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__set_m_startingVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::ObjectHolderListEnumerator::__get_m_startingVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::ObjectHolderListEnumerator::__set_m_currPos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::ObjectHolderListEnumerator::__get_m_currPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "list", ty: "System::Runtime::Serialization::ObjectHolderList", modifiers: "", def_value: None }, CppParam { name: "isFixupEnumerator", ty: "bool", modifiers: "", def_value: None }]
 System::Runtime::Serialization::ObjectHolderListEnumerator::ObjectHolderListEnumerator(System::Runtime::Serialization::ObjectHolderList list, bool isFixupEnumerator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectHolderListEnumerator>(list, isFixupEnumerator))) {}
 void System::Runtime::Serialization::ObjectHolderListEnumerator::_ctor(System::Runtime::Serialization::ObjectHolderList list, bool isFixupEnumerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::ObjectHolderList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, list, isFixupEnumerator);
}
 bool System::Runtime::Serialization::ObjectHolderListEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::Serialization::ObjectHolder System::Runtime::Serialization::ObjectHolderListEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::ObjectHolderListEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Serialization::ObjectHolder, false>(const_cast<void*>(instance), ___internal_method);
}
