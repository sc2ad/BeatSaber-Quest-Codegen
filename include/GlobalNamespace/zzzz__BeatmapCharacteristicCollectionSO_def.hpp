#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
// Type: ::BeatmapCharacteristicCollectionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4268))
// CS Name: BeatmapCharacteristicCollectionSO
class CORDL_TYPE BeatmapCharacteristicCollectionSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapCharacteristicCollectionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollectionSO", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicCollectionSO(BeatmapCharacteristicCollectionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicCollectionSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr BeatmapCharacteristicCollectionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicCollectionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicCollectionSO& operator=(BeatmapCharacteristicCollectionSO&& o) noexcept = default;
  constexpr BeatmapCharacteristicCollectionSO& operator=(BeatmapCharacteristicCollectionSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__beatmapCharacteristics, put=__set__beatmapCharacteristics))  _beatmapCharacteristics;

constexpr void __set__beatmapCharacteristics(::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __get__beatmapCharacteristics() const;


// Properties

 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=get_allBeatmapCharacteristics))  allBeatmapCharacteristics;


// Methods

/// @brief Method get_allBeatmapCharacteristics addr 0x21c96d8 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyCollection_1<GlobalNamespace::BeatmapCharacteristicSO> get_allBeatmapCharacteristics() ;

// Ctor Parameters []
explicit BeatmapCharacteristicCollectionSO() ;

/// @brief Method .ctor addr 0x21c96e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicCollectionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicCollectionSO, "", "BeatmapCharacteristicCollectionSO");
