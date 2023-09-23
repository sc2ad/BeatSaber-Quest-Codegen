#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Ice/zzzz__BeatmapFloorLightTilesGrid_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "Ice/zzzz__FloorLightTilesGrid_def.hpp"
//  Writing Method size for method: Ice::BeatmapFloorLightTilesGrid.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::BeatmapFloorLightTilesGrid::*)()>(&Ice::BeatmapFloorLightTilesGrid::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1210b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Ice::BeatmapFloorLightTilesGrid>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Ice::BeatmapFloorLightTilesGrid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::BeatmapFloorLightTilesGrid::*)()>(&Ice::BeatmapFloorLightTilesGrid::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1210d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Ice::BeatmapFloorLightTilesGrid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__numberOfRows(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Ice::BeatmapFloorLightTilesGrid::__get__numberOfRows() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__tileWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Ice::BeatmapFloorLightTilesGrid::__get__tileWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__tileHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Ice::BeatmapFloorLightTilesGrid::__get__tileHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__floorLightTilesGrid(Ice::FloorLightTilesGrid value)  {
::cordl_internals::setInstanceField<Ice::FloorLightTilesGrid, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Ice::FloorLightTilesGrid>(value));
}
constexpr Ice::FloorLightTilesGrid Ice::BeatmapFloorLightTilesGrid::__get__floorLightTilesGrid() const {
return ::cordl_internals::getInstanceField<Ice::FloorLightTilesGrid, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Ice::BeatmapFloorLightTilesGrid::__set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapObjectSpawnController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapObjectSpawnController>(value));
}
constexpr GlobalNamespace::IBeatmapObjectSpawnController Ice::BeatmapFloorLightTilesGrid::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapObjectSpawnController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Ice::BeatmapFloorLightTilesGrid::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Ice::BeatmapFloorLightTilesGrid>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Ice::BeatmapFloorLightTilesGrid::BeatmapFloorLightTilesGrid()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BeatmapFloorLightTilesGrid>())) {}
 void Ice::BeatmapFloorLightTilesGrid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Ice::BeatmapFloorLightTilesGrid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
