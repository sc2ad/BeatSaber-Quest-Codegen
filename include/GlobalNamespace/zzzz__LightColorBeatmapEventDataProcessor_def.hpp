#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventDataProcessor;
}
// Type: ::LightColorBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 920 }), TypeDefinitionIndex(TypeDefinitionIndex(14917)), TypeDefinitionIndex(TypeDefinitionIndex(14924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14926))
// CS Name: LightColorBeatmapEventDataProcessor
class CORDL_TYPE LightColorBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightColorBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightColorBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr LightColorBeatmapEventDataProcessor(LightColorBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightColorBeatmapEventData>(ptr) {
}


  constexpr LightColorBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorBeatmapEventDataProcessor& operator=(LightColorBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr LightColorBeatmapEventDataProcessor& operator=(LightColorBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedEventDataInternal addr 0xd92e9c size 0x128 virtual true final false
 void ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xd92fc4 size 0x108 virtual true final false
 void ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit LightColorBeatmapEventDataProcessor() ;

/// @brief Method .ctor addr 0xd930cc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorBeatmapEventDataProcessor, "", "LightColorBeatmapEventDataProcessor");
