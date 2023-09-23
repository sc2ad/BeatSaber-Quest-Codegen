#pragma once
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SurrogateHashtable_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::SurrogateHashtable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SurrogateHashtable::*)(int32_t)>(&System::Runtime::Serialization::SurrogateHashtable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2353804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::SurrogateHashtable.KeyEquals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::SurrogateHashtable::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::Runtime::Serialization::SurrogateHashtable::KeyEquals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2353bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Serialization::SurrogateHashtable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateHashtable>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
 System::Runtime::Serialization::SurrogateHashtable::SurrogateHashtable(int32_t size)  : System::Collections::Hashtable(THROW_UNLESS(::il2cpp_utils::New<SurrogateHashtable>(size))) {}
 void System::Runtime::Serialization::SurrogateHashtable::_ctor(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateHashtable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 bool System::Runtime::Serialization::SurrogateHashtable::KeyEquals(::bs_hook::Il2CppWrapperType key, ::bs_hook::Il2CppWrapperType item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::SurrogateHashtable>::get(),
                            "KeyEquals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, item);
}
