#pragma once
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IFocusRing.GetFocusChangeDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::FocusChangeDirection (UnityEngine::UIElements::IFocusRing::*)(UnityEngine::UIElements::Focusable, UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IFocusRing),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IFocusRing>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::IFocusRing.GetNextFocusable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::Focusable (UnityEngine::UIElements::IFocusRing::*)(UnityEngine::UIElements::Focusable, UnityEngine::UIElements::FocusChangeDirection)>(&UnityEngine::UIElements::IFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IFocusRing),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IFocusRing>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 UnityEngine::UIElements::FocusChangeDirection UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::EventBase e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IFocusRing>::get(),
                            "GetFocusChangeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::FocusChangeDirection, false>(const_cast<void*>(instance), ___internal_method, currentFocusable, e);
}
 UnityEngine::UIElements::Focusable UnityEngine::UIElements::IFocusRing::GetNextFocusable(UnityEngine::UIElements::Focusable currentFocusable, UnityEngine::UIElements::FocusChangeDirection direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IFocusRing>::get(),
                            "GetNextFocusable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusChangeDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::Focusable, false>(const_cast<void*>(instance), ___internal_method, currentFocusable, direction);
}
