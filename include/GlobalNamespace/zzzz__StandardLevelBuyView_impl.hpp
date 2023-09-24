#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
//  Writing Method size for method: GlobalNamespace::StandardLevelBuyView.get_buyButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Button (GlobalNamespace::StandardLevelBuyView::*)()>(&GlobalNamespace::StandardLevelBuyView::get_buyButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            "get_buyButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelBuyView.SetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelBuyView::*)(GlobalNamespace::IPreviewBeatmapLevel)>(&GlobalNamespace::StandardLevelBuyView::SetContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x218f6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StandardLevelBuyView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelBuyView::*)()>(&GlobalNamespace::StandardLevelBuyView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelBuyView::__set__levelBar(GlobalNamespace::LevelBar value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LevelBar, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LevelBar>(value));
}
constexpr GlobalNamespace::LevelBar GlobalNamespace::StandardLevelBuyView::__get__levelBar() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LevelBar, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::StandardLevelBuyView::__set__buyButton(UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Button, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Button>(value));
}
constexpr UnityEngine::UI::Button GlobalNamespace::StandardLevelBuyView::__get__buyButton() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Button, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UI::Button GlobalNamespace::StandardLevelBuyView::get_buyButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            "get_buyButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Button, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::StandardLevelBuyView::SetContent(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previewBeatmapLevel);
}
 GlobalNamespace::StandardLevelBuyView GlobalNamespace::StandardLevelBuyView::New_ctor()  {
GlobalNamespace::StandardLevelBuyView o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::StandardLevelBuyView>())};
return o;
}
 void GlobalNamespace::StandardLevelBuyView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StandardLevelBuyView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
