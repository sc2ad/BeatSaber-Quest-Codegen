#pragma once
#include "Menu/ViewControllers/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarViewController_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
//  Writing Method size for method: Menu::ViewControllers::EditAvatarHistorySnapshot.get_avatarEditPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart (Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(&Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d4b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            "get_avatarEditPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Menu::ViewControllers::EditAvatarHistorySnapshot.get_avatarData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData (Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(&Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d4b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            "get_avatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Menu::ViewControllers::EditAvatarHistorySnapshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Menu::ViewControllers::EditAvatarHistorySnapshot::*)(GlobalNamespace::AvatarData, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart)>(&Menu::ViewControllers::EditAvatarHistorySnapshot::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21d4ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Menu::ViewControllers::EditAvatarHistorySnapshot::__set__avatarEditPart_k__BackingField(GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarEditPart_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Menu::ViewControllers::EditAvatarHistorySnapshot::__set__avatarData_k__BackingField(GlobalNamespace::AvatarData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AvatarData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AvatarData>(value));
}
constexpr GlobalNamespace::AvatarData Menu::ViewControllers::EditAvatarHistorySnapshot::__get__avatarData_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AvatarData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            "get_avatarEditPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::AvatarData Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            "get_avatarData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::AvatarData, false>(const_cast<void*>(instance), ___internal_method);
}
 Menu::ViewControllers::EditAvatarHistorySnapshot Menu::ViewControllers::EditAvatarHistorySnapshot::New_ctor(GlobalNamespace::AvatarData avatarData, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart)  {
Menu::ViewControllers::EditAvatarHistorySnapshot o{THROW_UNLESS(::il2cpp_utils::New<Menu::ViewControllers::EditAvatarHistorySnapshot>(avatarData, avatarEditPart))};
return o;
}
 void Menu::ViewControllers::EditAvatarHistorySnapshot::_ctor(GlobalNamespace::AvatarData avatarData, GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart avatarEditPart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Menu::ViewControllers::EditAvatarHistorySnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AvatarData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, avatarData, avatarEditPart);
}
