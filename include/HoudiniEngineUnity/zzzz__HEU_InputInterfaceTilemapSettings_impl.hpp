#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTilemapSettings_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::*)()>(&HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2059cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__set__createGroupsForTiles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__get__createGroupsForTiles() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__set__exportUnusedTiles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__get__exportUnusedTiles() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__set__applyTileColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__get__applyTileColor() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__set__applyTilemapOrientation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x13>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::__get__applyTilemapOrientation() const {
return ::cordl_internals::getInstanceField<bool, 0x13>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::HEU_InputInterfaceTilemapSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_InputInterfaceTilemapSettings>())) {}
 void HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
