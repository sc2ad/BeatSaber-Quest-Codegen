#pragma once
namespace {
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDragAndDrop.StartDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IDragAndDrop::*)(::UnityEngine::UIElements::StartDragArgs)>(&::UnityEngine::UIElements::IDragAndDrop::StartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::IDragAndDrop),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IDragAndDrop.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDropData (::UnityEngine::UIElements::IDragAndDrop::*)()>(&::UnityEngine::UIElements::IDragAndDrop::get_data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::IDragAndDrop),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::IDragAndDrop::StartDrag(::UnityEngine::UIElements::StartDragArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop>::get(),
                            "StartDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StartDragArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 ::UnityEngine::UIElements::IDragAndDropData ::UnityEngine::UIElements::IDragAndDrop::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDropData, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
