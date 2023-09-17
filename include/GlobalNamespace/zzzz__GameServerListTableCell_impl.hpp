#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameServerListTableCell_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)(::GlobalNamespace::INetworkPlayer)>(&::GlobalNamespace::GameServerListTableCell::SetData)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2123404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListTableCell::*)()>(&::GlobalNamespace::GameServerListTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212378c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__serverName(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerListTableCell::__get__serverName() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__difficultiesText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerListTableCell::__get__difficultiesText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__musicPackText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerListTableCell::__get__musicPackText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__playerCount(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerListTableCell::__get__playerCount() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__passwordProtected(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::GameServerListTableCell::__get__passwordProtected() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerListTableCell::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMasksModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SongPackMasksModel>(value));
}
constexpr ::GlobalNamespace::SongPackMasksModel ::GlobalNamespace::GameServerListTableCell::__get__songPackMasksModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMasksModel, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::GameServerListTableCell::SetData(::GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, player);
}
// Ctor Parameters []
 ::GlobalNamespace::GameServerListTableCell::GameServerListTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<GameServerListTableCell>())) {}
 void ::GlobalNamespace::GameServerListTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
