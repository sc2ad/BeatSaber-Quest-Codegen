#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__ArgIterator_def.hpp"
//  Writing Method size for method: System::ArgIterator.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ArgIterator::*)(::bs_hook::Il2CppWrapperType)>(&System::ArgIterator::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2487e90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ArgIterator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArgIterator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ArgIterator.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ArgIterator::*)()>(&System::ArgIterator::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2487ee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ArgIterator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArgIterator>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sig", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "next_arg", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ArgIterator::ArgIterator(::cordl_internals::intptr_t sig, ::cordl_internals::intptr_t args, int32_t next_arg, int32_t num_args) noexcept : ::bs_hook::ValueTypeWrapper() {this->sig = sig;
this->args = args;
this->next_arg = next_arg;
this->num_args = num_args;
}
constexpr void System::ArgIterator::__set_sig(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::ArgIterator::__get_sig() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void System::ArgIterator::__set_args(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::ArgIterator::__get_args() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void System::ArgIterator::__set_next_arg(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArgIterator::__get_next_arg() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void System::ArgIterator::__set_num_args(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ArgIterator::__get_num_args() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
 bool System::ArgIterator::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArgIterator>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, o);
}
 int32_t System::ArgIterator::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ArgIterator>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
