#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventDataProcessor;
}
// Type: ::LightRotationBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 921 }), TypeDefinitionIndex(TypeDefinitionIndex(14918)), TypeDefinitionIndex(TypeDefinitionIndex(14924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14927))
// CS Name: LightRotationBeatmapEventDataProcessor
class CORDL_TYPE LightRotationBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightRotationBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightRotationBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr LightRotationBeatmapEventDataProcessor(LightRotationBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightRotationBeatmapEventData>(ptr) {
}


  constexpr LightRotationBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationBeatmapEventDataProcessor& operator=(LightRotationBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr LightRotationBeatmapEventDataProcessor& operator=(LightRotationBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedEventDataInternal addr 0xd93114 size 0x110 virtual true final false
 void ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xd93224 size 0xfc virtual true final false
 void ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit LightRotationBeatmapEventDataProcessor() ;

/// @brief Method .ctor addr 0xd93320 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightRotationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightRotationBeatmapEventDataProcessor, "", "LightRotationBeatmapEventDataProcessor");
