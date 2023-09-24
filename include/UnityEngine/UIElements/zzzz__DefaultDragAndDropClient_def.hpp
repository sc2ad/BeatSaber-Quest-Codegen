#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
namespace UnityEngine::UIElements {
class StartDragArgs;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultDragAndDropClient;
}
// Type: UnityEngine.UIElements::DefaultDragAndDropClient
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7051))
// CS Name: UnityEngine.UIElements.DefaultDragAndDropClient
class CORDL_TYPE DefaultDragAndDropClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IDragAndDrop
constexpr operator  UnityEngine::UIElements::IDragAndDrop() const noexcept;

/// @brief Convert operator to UnityEngine::UIElements::IDragAndDropData
constexpr operator  UnityEngine::UIElements::IDragAndDropData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultDragAndDropClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: " const&", def_value: None }]
constexpr DefaultDragAndDropClient(DefaultDragAndDropClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDragAndDropClient", modifiers: "&&", def_value: None }]
constexpr DefaultDragAndDropClient(DefaultDragAndDropClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDragAndDropClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultDragAndDropClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDragAndDropClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDragAndDropClient& operator=(DefaultDragAndDropClient&& o) noexcept = default;
  constexpr DefaultDragAndDropClient& operator=(DefaultDragAndDropClient const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::StartDragArgs __declspec(property(get=__get_m_StartDragArgs, put=__set_m_StartDragArgs))  m_StartDragArgs;

constexpr void __set_m_StartDragArgs(UnityEngine::UIElements::StartDragArgs value) ;

constexpr UnityEngine::UIElements::StartDragArgs __get_m_StartDragArgs() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_userData))  userData;

 UnityEngine::UIElements::IDragAndDropData __declspec(property(get=get_data))  data;


// Methods

/// @brief Method get_userData addr 0x2c949f4 size 0x18 virtual true final true
 ::bs_hook::Il2CppWrapperType get_userData() ;

/// @brief Method StartDrag addr 0x2c94a0c size 0x8 virtual true final true
 void StartDrag(UnityEngine::UIElements::StartDragArgs args) ;

/// @brief Method get_data addr 0x2c92d44 size 0x4 virtual true final true
 UnityEngine::UIElements::IDragAndDropData get_data() ;

static UnityEngine::UIElements::DefaultDragAndDropClient New_ctor() ;

/// @brief Method .ctor addr 0x2c949ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DefaultDragAndDropClient);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DefaultDragAndDropClient, "UnityEngine.UIElements", "DefaultDragAndDropClient");
