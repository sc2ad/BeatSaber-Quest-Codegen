#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::UnityEngine__UIElements__MeshGenerationContext__MeshFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::UVisDisplacement{1};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags  UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags::SkipDynamicAtlas{2};
//  Writing Method size for method: UnityEngine::UIElements::MeshGenerationContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::MeshGenerationContext::*)(UnityEngine::UIElements::IStylePainter)>(&UnityEngine::UIElements::MeshGenerationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d05fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IStylePainter>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::MeshGenerationContext::__set_painter(UnityEngine::UIElements::IStylePainter value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IStylePainter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::IStylePainter>(value));
}
constexpr UnityEngine::UIElements::IStylePainter UnityEngine::UIElements::MeshGenerationContext::__get_painter() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IStylePainter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "painter", ty: "UnityEngine::UIElements::IStylePainter", modifiers: "", def_value: None }]
 UnityEngine::UIElements::MeshGenerationContext::MeshGenerationContext(UnityEngine::UIElements::IStylePainter painter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MeshGenerationContext>(painter))) {}
 void UnityEngine::UIElements::MeshGenerationContext::_ctor(UnityEngine::UIElements::IStylePainter painter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MeshGenerationContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IStylePainter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, painter);
}
