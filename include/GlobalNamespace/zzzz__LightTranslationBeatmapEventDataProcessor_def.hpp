#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventDataProcessor;
}
// Type: ::LightTranslationBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 906 }), TypeDefinitionIndex(TypeDefinitionIndex(14924)), TypeDefinitionIndex(TypeDefinitionIndex(14920))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14928))
// CS Name: LightTranslationBeatmapEventDataProcessor
class CORDL_TYPE LightTranslationBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightTranslationBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightTranslationBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr LightTranslationBeatmapEventDataProcessor(LightTranslationBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr LightTranslationBeatmapEventDataProcessor(LightTranslationBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::LightTranslationBeatmapEventData>(ptr) {
}


  constexpr LightTranslationBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationBeatmapEventDataProcessor& operator=(LightTranslationBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr LightTranslationBeatmapEventDataProcessor& operator=(LightTranslationBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedEventDataInternal addr 0xd93368 size 0x110 virtual true final false
 void ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xd93478 size 0xfc virtual true final false
 void ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit LightTranslationBeatmapEventDataProcessor() ;

/// @brief Method .ctor addr 0xd93574 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightTranslationBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightTranslationBeatmapEventDataProcessor, "", "LightTranslationBeatmapEventDataProcessor");
