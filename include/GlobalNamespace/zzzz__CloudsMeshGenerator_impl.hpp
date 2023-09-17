#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__CloudsMeshGenerator_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "precisionOpaqueMesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lowPolyMesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sizeModifier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomThreshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "weight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "precisionVertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowPolyVertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "generatedCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::____GlobalNamespace__CloudsMeshGenerator__Cloud(::UnityEngine::Mesh precisionOpaqueMesh, ::UnityEngine::Mesh lowPolyMesh, float_t sizeModifier, float_t bottomThreshold, int32_t weight, int32_t precisionVertexCount, int32_t lowPolyVertexCount, int32_t generatedCount) noexcept : ::bs_hook::ValueTypeWrapper() {this->precisionOpaqueMesh = precisionOpaqueMesh;
this->lowPolyMesh = lowPolyMesh;
this->sizeModifier = sizeModifier;
this->bottomThreshold = bottomThreshold;
this->weight = weight;
this->precisionVertexCount = precisionVertexCount;
this->lowPolyVertexCount = lowPolyVertexCount;
this->generatedCount = generatedCount;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_precisionOpaqueMesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x0>(this->__instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_precisionOpaqueMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_lowPolyMesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x8>(this->__instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_lowPolyMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_sizeModifier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_sizeModifier() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_bottomThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_bottomThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_weight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_weight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_precisionVertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_precisionVertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_lowPolyVertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_lowPolyVertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__set_generatedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud::__get_generatedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalizedRadius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cloudIDs", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sizeMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::____GlobalNamespace__CloudsMeshGenerator__Ring(float_t radius, float_t normalizedRadius, int32_t meshCount, ::ArrayW<int32_t> cloudIDs, float_t sizeMultiplier) noexcept : ::bs_hook::ValueTypeWrapper() {this->radius = radius;
this->normalizedRadius = normalizedRadius;
this->meshCount = meshCount;
this->cloudIDs = cloudIDs;
this->sizeMultiplier = sizeMultiplier;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__set_radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__set_normalizedRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__get_normalizedRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__set_meshCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__get_meshCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__set_cloudIDs(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->__instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__get_cloudIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__set_sizeMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring::__get_sizeMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->__instance);
}
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: Some("csnull") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius(::UnityEngine::Transform transform, float_t distance, float_t radius) noexcept : ::bs_hook::ValueTypeWrapper() {this->transform = transform;
this->distance = distance;
this->radius = radius;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__set_transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x0>(this->__instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__get_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__set_distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__get_distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__set_radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
// Ctor Parameters [CppParam { name: "normalizedStart", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalizedEnd", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "absoluteStart", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "absoluteEnd", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk(float_t normalizedStart, float_t normalizedEnd, float_t absoluteStart, float_t absoluteEnd) noexcept : ::bs_hook::ValueTypeWrapper() {this->normalizedStart = normalizedStart;
this->normalizedEnd = normalizedEnd;
this->absoluteStart = absoluteStart;
this->absoluteEnd = absoluteEnd;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__set_normalizedStart(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__get_normalizedStart() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__set_normalizedEnd(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__get_normalizedEnd() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__set_absoluteStart(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__get_absoluteStart() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__set_absoluteEnd(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk::__get_absoluteEnd() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
//  Writing Method size for method: ::GlobalNamespace::CloudsMeshGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CloudsMeshGenerator::*)()>(&::GlobalNamespace::CloudsMeshGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x20ab4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudsMeshGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshFilter(::UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshFilter>(value));
}
constexpr ::UnityEngine::MeshFilter ::GlobalNamespace::CloudsMeshGenerator::__get__meshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::CloudsMeshGenerator::__get__meshName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__pauseGenerator(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::CloudsMeshGenerator::__get__pauseGenerator() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__bottomPushEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::CloudsMeshGenerator::__get__bottomPushEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__bottomPushDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__bottomPushDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__bottomScaleTopBottom(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::GlobalNamespace::CloudsMeshGenerator::__get__bottomScaleTopBottom() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__bottomHorizontalScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__bottomHorizontalScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__drawRingGizmos(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::CloudsMeshGenerator::__get__drawRingGizmos() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__prohibitedRadii(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> ::GlobalNamespace::CloudsMeshGenerator::__get__prohibitedRadii() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshSize(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::GlobalNamespace::CloudsMeshGenerator::__get__meshSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__sizeRandomness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__sizeRandomness() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__ratioRandomness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__ratioRandomness() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__perMeshRadiusOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__perMeshRadiusOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__possibleColors(::UnityEngine::Gradient value)  {
::cordl_internals::setInstanceField<::UnityEngine::Gradient, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Gradient>(value));
}
constexpr ::UnityEngine::Gradient ::GlobalNamespace::CloudsMeshGenerator::__get__possibleColors() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Gradient, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__randomSeed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CloudsMeshGenerator::__get__randomSeed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__heightRandomness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__heightRandomness() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__ringRotationRandomness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__ringRotationRandomness() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__ringCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CloudsMeshGenerator::__get__ringCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshesPerRadius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__meshesPerRadius() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__radiusCloseFar(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::GlobalNamespace::CloudsMeshGenerator::__get__radiusCloseFar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__sizeCloseFar(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::GlobalNamespace::CloudsMeshGenerator::__get__sizeCloseFar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__heightCloseFar(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::CloudsMeshGenerator::__get__heightCloseFar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__lowPolyThreshold(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::CloudsMeshGenerator::__get__lowPolyThreshold() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__flipNormals(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::CloudsMeshGenerator::__get__flipNormals() const {
return ::cordl_internals::getInstanceField<bool, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__curveMesh(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::CloudsMeshGenerator::__get__curveMesh() const {
return ::cordl_internals::getInstanceField<bool, 0x9d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__clouds(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud> ::GlobalNamespace::CloudsMeshGenerator::__get__clouds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CloudsMeshGenerator::__get__meshCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__vertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::CloudsMeshGenerator::__get__vertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__generatedMesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::GlobalNamespace::CloudsMeshGenerator::__get__generatedMesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__meshBounds(::UnityEngine::Bounds value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds ::GlobalNamespace::CloudsMeshGenerator::__get__meshBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__radiusChunks(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk> ::GlobalNamespace::CloudsMeshGenerator::__get__radiusChunks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk>, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__rings(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring> ::GlobalNamespace::CloudsMeshGenerator::__get__rings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CloudsMeshGenerator::__set__sortedProhibitedRadii(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> ::GlobalNamespace::CloudsMeshGenerator::__get__sortedProhibitedRadii() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::CloudsMeshGenerator::CloudsMeshGenerator()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CloudsMeshGenerator>())) {}
 void ::GlobalNamespace::CloudsMeshGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CloudsMeshGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
