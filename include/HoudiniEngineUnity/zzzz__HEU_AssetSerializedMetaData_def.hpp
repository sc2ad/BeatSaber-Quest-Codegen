#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class CurveNodeData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetSerializedMetaData;
}
// Type: HoudiniEngineUnity::HEU_AssetSerializedMetaData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9558))
// CS Name: HoudiniEngineUnity.HEU_AssetSerializedMetaData
class CORDL_TYPE HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_AssetSerializedMetaData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: " const&", def_value: None }]
constexpr HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetSerializedMetaData", modifiers: "&&", def_value: None }]
constexpr HEU_AssetSerializedMetaData(HEU_AssetSerializedMetaData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetSerializedMetaData(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_AssetSerializedMetaData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetSerializedMetaData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetSerializedMetaData& operator=(HEU_AssetSerializedMetaData&& o) noexcept = default;
  constexpr HEU_AssetSerializedMetaData& operator=(HEU_AssetSerializedMetaData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__softDeleted, put=__set__softDeleted))  _softDeleted;

constexpr void __set__softDeleted(bool value) ;

constexpr bool __get__softDeleted() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData>> __declspec(property(get=__get__savedCurveNodeData, put=__set__savedCurveNodeData))  _savedCurveNodeData;

constexpr void __set__savedCurveNodeData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData>> __get__savedCurveNodeData() const;


// Properties

 bool __declspec(property(get=get_SoftDeleted, put=set_SoftDeleted))  SoftDeleted;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData>> __declspec(property(get=get_SavedCurveNodeData))  SavedCurveNodeData;


// Methods

/// @brief Method get_SoftDeleted addr 0x1fdd094 size 0x8 virtual false final false
 bool get_SoftDeleted() ;

/// @brief Method set_SoftDeleted addr 0x1fdd09c size 0xc virtual false final false
 void set_SoftDeleted(bool value) ;

/// @brief Method get_SavedCurveNodeData addr 0x1fdd0a8 size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData>> get_SavedCurveNodeData() ;

/// @brief Method IsEquivalentTo addr 0x1fdd0b0 size 0xbc virtual true final true
 bool IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData other) ;

// Ctor Parameters []
explicit HEU_AssetSerializedMetaData() ;

/// @brief Method .ctor addr 0x1fdd16c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSerializedMetaData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSerializedMetaData, "HoudiniEngineUnity", "HEU_AssetSerializedMetaData");
