#pragma once
namespace {
#include "UnityEngine/UI/zzzz__Clipping_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__RectMask2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Clipping.FindCullAndClipWorldRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D>, ByRef<bool>)>(&::UnityEngine::UI::Clipping::FindCullAndClipWorldRect)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2bda198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Clipping>::get(),
                            "FindCullAndClipWorldRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::Rect ::UnityEngine::UI::Clipping::FindCullAndClipWorldRect(::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D> rectMaskParents, ByRef<bool> validRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Clipping>::get(),
                            "FindCullAndClipWorldRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UI::RectMask2D>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, rectMaskParents, validRect);
}
} // end anonymous namespace
