#pragma once
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::DrawParams.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::DrawParams::*)()>(&UnityEngine::UIElements::UIR::DrawParams::Reset)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2c5ad18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::DrawParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::DrawParams::*)()>(&UnityEngine::UIElements::UIR::DrawParams::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2c55a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::UIR::DrawParams::__set_k_UnlimitedRect(UnityEngine::Rect value)  {
::cordl_internals::setStaticField<UnityEngine::Rect, "k_UnlimitedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get>(std::forward<UnityEngine::Rect>(value));
}
 UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::__get_k_UnlimitedRect()  {
return ::cordl_internals::getStaticField<UnityEngine::Rect, "k_UnlimitedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get>();
}
 void UnityEngine::UIElements::UIR::DrawParams::__set_k_FullNormalizedRect(UnityEngine::Rect value)  {
::cordl_internals::setStaticField<UnityEngine::Rect, "k_FullNormalizedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get>(std::forward<UnityEngine::Rect>(value));
}
 UnityEngine::Rect UnityEngine::UIElements::UIR::DrawParams::__get_k_FullNormalizedRect()  {
return ::cordl_internals::getStaticField<UnityEngine::Rect, "k_FullNormalizedRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get>();
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_view(System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4>>(value));
}
constexpr System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4> UnityEngine::UIElements::UIR::DrawParams::__get_view() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<UnityEngine::Matrix4x4>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_scissor(System::Collections::Generic::Stack_1<UnityEngine::Rect> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Stack_1<UnityEngine::Rect>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Stack_1<UnityEngine::Rect>>(value));
}
constexpr System::Collections::Generic::Stack_1<UnityEngine::Rect> UnityEngine::UIElements::UIR::DrawParams::__get_scissor() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Stack_1<UnityEngine::Rect>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_renderTexture(System::Collections::Generic::List_1<UnityEngine::RenderTexture> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::RenderTexture>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::RenderTexture>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::RenderTexture> UnityEngine::UIElements::UIR::DrawParams::__get_renderTexture() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::RenderTexture>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::DrawParams::__set_defaultMaterial(System::Collections::Generic::List_1<UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Material>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Material>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Material> UnityEngine::UIElements::UIR::DrawParams::__get_defaultMaterial() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Material>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::DrawParams::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::UIElements::UIR::DrawParams::DrawParams()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DrawParams>())) {}
 void UnityEngine::UIElements::UIR::DrawParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::DrawParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
