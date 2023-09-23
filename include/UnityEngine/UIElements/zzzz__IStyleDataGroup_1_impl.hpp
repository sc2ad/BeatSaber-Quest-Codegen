#pragma once
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IStyleDataGroup_1.Copy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (UnityEngine::UIElements::IStyleDataGroup_1::*)()>(&UnityEngine::UIElements::IStyleDataGroup_1::Copy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IStyleDataGroup_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IStyleDataGroup_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IStyleDataGroup_1.CopyFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IStyleDataGroup_1::*)(ByRef<T>)>(&UnityEngine::UIElements::IStyleDataGroup_1::CopyFrom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IStyleDataGroup_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IStyleDataGroup_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 T UnityEngine::UIElements::IStyleDataGroup_1::Copy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IStyleDataGroup_1>::get(),
                            "Copy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::IStyleDataGroup_1::CopyFrom(ByRef<T> other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IStyleDataGroup_1>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
