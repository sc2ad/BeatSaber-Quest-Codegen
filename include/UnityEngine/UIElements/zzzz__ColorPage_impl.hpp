#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::ColorPage.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::ColorPage (*)(UnityEngine::UIElements::UIR::RenderChain, UnityEngine::UIElements::UIR::BMPAlloc)>(&UnityEngine::UIElements::ColorPage::Init)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d026c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ColorPage>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageAndID", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::ColorPage::ColorPage(bool isValid, UnityEngine::Color32 pageAndID) noexcept : ::bs_hook::ValueTypeWrapper() {this->isValid = isValid;
this->pageAndID = pageAndID;
}
constexpr void UnityEngine::UIElements::ColorPage::__set_isValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::ColorPage::__get_isValid() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::ColorPage::__set_pageAndID(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x4>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::UIElements::ColorPage::__get_pageAndID() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x4>(this->__instance);
}
 UnityEngine::UIElements::ColorPage UnityEngine::UIElements::ColorPage::Init(UnityEngine::UIElements::UIR::RenderChain renderChain, UnityEngine::UIElements::UIR::BMPAlloc alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::ColorPage>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::ColorPage, false>(nullptr, ___internal_method, renderChain, alloc);
}
