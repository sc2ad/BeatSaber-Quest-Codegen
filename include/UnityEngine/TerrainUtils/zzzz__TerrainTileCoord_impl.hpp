#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TerrainUtils/zzzz__TerrainTileCoord_def.hpp"
//  Writing Method size for method: UnityEngine::TerrainUtils::TerrainTileCoord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainUtils::TerrainTileCoord::*)(int32_t, int32_t)>(&UnityEngine::TerrainUtils::TerrainTileCoord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba76bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainUtils::TerrainTileCoord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "tileX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord(int32_t tileX, int32_t tileZ) noexcept : ::bs_hook::ValueTypeWrapper() {this->tileX = tileX;
this->tileZ = tileZ;
}
constexpr void UnityEngine::TerrainUtils::TerrainTileCoord::__set_tileX(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TerrainUtils::TerrainTileCoord::__get_tileX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TerrainUtils::TerrainTileCoord::__set_tileZ(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TerrainUtils::TerrainTileCoord::__get_tileZ() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void UnityEngine::TerrainUtils::TerrainTileCoord::_ctor(int32_t tileX, int32_t tileZ)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainUtils::TerrainTileCoord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, tileX, tileZ);
}
