#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapEventDataProcessor;
}
// Type: ::BasicBeatmapEventDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14906)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14924), inst: 918 }), TypeDefinitionIndex(TypeDefinitionIndex(14924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14923))
// CS Name: BasicBeatmapEventDataProcessor
class CORDL_TYPE BasicBeatmapEventDataProcessor : public GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::BasicBeatmapEventData> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BasicBeatmapEventDataProcessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: " const&", def_value: None }]
constexpr BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapEventDataProcessor", modifiers: "&&", def_value: None }]
constexpr BasicBeatmapEventDataProcessor(BasicBeatmapEventDataProcessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicBeatmapEventDataProcessor(void* ptr) noexcept : GlobalNamespace::BeatmapEventDataProcessor_1<GlobalNamespace::BasicBeatmapEventData>(ptr) {
}


  constexpr BasicBeatmapEventDataProcessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicBeatmapEventDataProcessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicBeatmapEventDataProcessor& operator=(BasicBeatmapEventDataProcessor&& o) noexcept = default;
  constexpr BasicBeatmapEventDataProcessor& operator=(BasicBeatmapEventDataProcessor const& o) noexcept = default;
                


// Methods

/// @brief Method ProcessInsertedEventDataInternal addr 0xd929f0 size 0x1e8 virtual true final false
 void ProcessInsertedEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> insertedNode) ;

/// @brief Method ProcessBeforeDeleteEventDataInternal addr 0xd92bd8 size 0x234 virtual true final false
 void ProcessBeforeDeleteEventDataInternal(System::Collections::Generic::LinkedListNode_1<GlobalNamespace::BeatmapDataItem> nodeToDelete) ;

// Ctor Parameters []
explicit BasicBeatmapEventDataProcessor() ;

/// @brief Method .ctor addr 0xd92e0c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicBeatmapEventDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapEventDataProcessor, "", "BasicBeatmapEventDataProcessor");
