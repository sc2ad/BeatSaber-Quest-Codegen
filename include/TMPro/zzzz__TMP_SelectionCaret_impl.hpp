#pragma once
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "TMPro/zzzz__TMP_SelectionCaret_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: TMPro::TMP_SelectionCaret.Cull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SelectionCaret::*)(UnityEngine::Rect, bool)>(&TMPro::TMP_SelectionCaret::Cull)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2aa8178;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(TMPro::TMP_SelectionCaret),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_SelectionCaret.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SelectionCaret::*)()>(&TMPro::TMP_SelectionCaret::UpdateGeometry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2aa8248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(TMPro::TMP_SelectionCaret),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_SelectionCaret._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SelectionCaret::*)()>(&TMPro::TMP_SelectionCaret::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa824c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void TMPro::TMP_SelectionCaret::Cull(UnityEngine::Rect clipRect, bool validRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                            "Cull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clipRect, validRect);
}
 void TMPro::TMP_SelectionCaret::UpdateGeometry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 TMPro::TMP_SelectionCaret::TMP_SelectionCaret()  : UnityEngine::UI::MaskableGraphic(THROW_UNLESS(::il2cpp_utils::New<TMP_SelectionCaret>())) {}
 void TMPro::TMP_SelectionCaret::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SelectionCaret>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
