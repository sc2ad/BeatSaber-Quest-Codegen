#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_WorkItemTally;
}
// Type: HoudiniEngineUnity::HEU_WorkItemTally
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9715))
// CS Name: HoudiniEngineUnity.HEU_WorkItemTally
class CORDL_TYPE HEU_WorkItemTally : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_WorkItemTally() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_WorkItemTally", modifiers: " const&", def_value: None }]
constexpr HEU_WorkItemTally(HEU_WorkItemTally const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_WorkItemTally", modifiers: "&&", def_value: None }]
constexpr HEU_WorkItemTally(HEU_WorkItemTally&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_WorkItemTally(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_WorkItemTally& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_WorkItemTally& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_WorkItemTally& operator=(HEU_WorkItemTally&& o) noexcept = default;
  constexpr HEU_WorkItemTally& operator=(HEU_WorkItemTally const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__totalWorkItems, put=__set__totalWorkItems))  _totalWorkItems;

constexpr void __set__totalWorkItems(int32_t value) ;

constexpr int32_t __get__totalWorkItems() const;

 int32_t __declspec(property(get=__get__waitingWorkItems, put=__set__waitingWorkItems))  _waitingWorkItems;

constexpr void __set__waitingWorkItems(int32_t value) ;

constexpr int32_t __get__waitingWorkItems() const;

 int32_t __declspec(property(get=__get__scheduledWorkItems, put=__set__scheduledWorkItems))  _scheduledWorkItems;

constexpr void __set__scheduledWorkItems(int32_t value) ;

constexpr int32_t __get__scheduledWorkItems() const;

 int32_t __declspec(property(get=__get__cookingWorkItems, put=__set__cookingWorkItems))  _cookingWorkItems;

constexpr void __set__cookingWorkItems(int32_t value) ;

constexpr int32_t __get__cookingWorkItems() const;

 int32_t __declspec(property(get=__get__cookedWorkItems, put=__set__cookedWorkItems))  _cookedWorkItems;

constexpr void __set__cookedWorkItems(int32_t value) ;

constexpr int32_t __get__cookedWorkItems() const;

 int32_t __declspec(property(get=__get__erroredWorkItems, put=__set__erroredWorkItems))  _erroredWorkItems;

constexpr void __set__erroredWorkItems(int32_t value) ;

constexpr int32_t __get__erroredWorkItems() const;


// Methods

/// @brief Method ZeroAll addr 0x202a078 size 0xc virtual false final false
 void ZeroAll() ;

/// @brief Method AreAllWorkItemsComplete addr 0x202b124 size 0x38 virtual false final false
 bool AreAllWorkItemsComplete() ;

/// @brief Method AnyWorkItemsFailed addr 0x202b15c size 0x10 virtual false final false
 bool AnyWorkItemsFailed() ;

/// @brief Method AnyWorkItemsPending addr 0x202b1c4 size 0x44 virtual false final false
 bool AnyWorkItemsPending() ;

/// @brief Method ProgressRatio addr 0x202b208 size 0xac virtual false final false
 ::StringW ProgressRatio() ;

// Ctor Parameters []
explicit HEU_WorkItemTally() ;

/// @brief Method .ctor addr 0x202afb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_WorkItemTally);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_WorkItemTally, "HoudiniEngineUnity", "HEU_WorkItemTally");
