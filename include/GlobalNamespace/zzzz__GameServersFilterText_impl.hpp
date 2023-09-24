#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameServersFilterText.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterText::*)(GlobalNamespace::GameServersFilter, bool)>(&GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x218763c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameServersFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameServersFilterText.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterText::*)(GlobalNamespace::BeatmapDifficultyMask, GlobalNamespace::SongPackMask, bool)>(&GlobalNamespace::GameServersFilterText::Setup)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2187888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameServersFilterText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilterText::*)()>(&GlobalNamespace::GameServersFilterText::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2187a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameServersFilterText::__set__text(HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<HMUI::CurvedTextMeshPro, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::CurvedTextMeshPro>(value));
}
constexpr HMUI::CurvedTextMeshPro GlobalNamespace::GameServersFilterText::__get__text() const {
return ::cordl_internals::getInstanceField<HMUI::CurvedTextMeshPro, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilterText::__set__songPackMasksModel(GlobalNamespace::SongPackMasksModel value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMasksModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMasksModel>(value));
}
constexpr GlobalNamespace::SongPackMasksModel GlobalNamespace::GameServersFilterText::__get__songPackMasksModel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMasksModel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilterText::__set__stringBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setInstanceField<System::Text::StringBuilder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Text::StringBuilder>(value));
}
constexpr System::Text::StringBuilder GlobalNamespace::GameServersFilterText::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<System::Text::StringBuilder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameServersFilterText::Setup(GlobalNamespace::GameServersFilter filter, bool visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameServersFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, filter, visible);
}
 void GlobalNamespace::GameServersFilterText::Setup(GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, GlobalNamespace::SongPackMask songPackMask, bool visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapDifficultyMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapDifficultyMask, songPackMask, visible);
}
 GlobalNamespace::GameServersFilterText GlobalNamespace::GameServersFilterText::New_ctor()  {
GlobalNamespace::GameServersFilterText o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GameServersFilterText>())};
return o;
}
 void GlobalNamespace::GameServersFilterText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilterText>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
