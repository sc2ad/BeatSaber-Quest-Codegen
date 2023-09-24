#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_VolumeScatterTrees.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_VolumeScatterTrees::*)(HoudiniEngineUnity::HEU_VolumeScatterTrees)>(&HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x20778b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_VolumeScatterTrees._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_VolumeScatterTrees::*)()>(&HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2077c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeScatterTrees>
constexpr  HoudiniEngineUnity::HEU_VolumeScatterTrees::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeScatterTrees>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeScatterTrees>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__treePrototypInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__treePrototypInfos() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__colors(::ArrayW<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Color32>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Color32>>(value));
}
constexpr ::ArrayW<UnityEngine::Color32> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Color32>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__heightScales(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__heightScales() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__lightmapColors(::ArrayW<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Color32>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Color32>>(value));
}
constexpr ::ArrayW<UnityEngine::Color32> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__lightmapColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Color32>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__positions(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__positions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__prototypeIndices(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__prototypeIndices() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__rotations(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__rotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__widthScales(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__widthScales() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeScatterTrees::__set__terrainTiles(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_VolumeScatterTrees::__get__terrainTiles() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_VolumeScatterTrees::IsEquivalentTo(HoudiniEngineUnity::HEU_VolumeScatterTrees other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 HoudiniEngineUnity::HEU_VolumeScatterTrees HoudiniEngineUnity::HEU_VolumeScatterTrees::New_ctor()  {
HoudiniEngineUnity::HEU_VolumeScatterTrees o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_VolumeScatterTrees>())};
return o;
}
 void HoudiniEngineUnity::HEU_VolumeScatterTrees::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
