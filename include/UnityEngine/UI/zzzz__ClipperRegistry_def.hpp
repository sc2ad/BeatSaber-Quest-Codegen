#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UI::Collections {
template<typename T>
class IndexedSet_1;
}
namespace UnityEngine::UI {
class IClipper;
}
// Forward declare root types
namespace UnityEngine::UI {
class ClipperRegistry;
}
// Type: UnityEngine.UI::ClipperRegistry
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12963))
// CS Name: UnityEngine.UI.ClipperRegistry
class CORDL_TYPE ClipperRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ClipperRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClipperRegistry", modifiers: " const&", def_value: None }]
constexpr ClipperRegistry(ClipperRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClipperRegistry", modifiers: "&&", def_value: None }]
constexpr ClipperRegistry(ClipperRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClipperRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClipperRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClipperRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClipperRegistry& operator=(ClipperRegistry&& o) noexcept = default;
  constexpr ClipperRegistry& operator=(ClipperRegistry const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::ClipperRegistry __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::UI::ClipperRegistry value) ;

static UnityEngine::UI::ClipperRegistry __get_s_Instance() ;

 UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper> __declspec(property(get=__get_m_Clippers, put=__set_m_Clippers))  m_Clippers;

constexpr void __set_m_Clippers(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper> value) ;

constexpr UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper> __get_m_Clippers() const;


// Properties

static UnityEngine::UI::ClipperRegistry __declspec(property(get=get_instance))  instance;


// Methods

static UnityEngine::UI::ClipperRegistry New_ctor() ;

/// @brief Method .ctor addr 0x2bd9ff4 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method get_instance addr 0x2bd8e18 size 0x7c virtual false final false
static UnityEngine::UI::ClipperRegistry get_instance() ;

/// @brief Method Cull addr 0x2bd8e94 size 0x10c virtual false final false
 void Cull() ;

/// @brief Method Register addr 0x2bda070 size 0x70 virtual false final false
static void Register(UnityEngine::UI::IClipper c) ;

/// @brief Method Unregister addr 0x2bda0e0 size 0x5c virtual false final false
static void Unregister(UnityEngine::UI::IClipper c) ;

/// @brief Method Disable addr 0x2bda13c size 0x5c virtual false final false
static void Disable(UnityEngine::UI::IClipper c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::ClipperRegistry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ClipperRegistry, "UnityEngine.UI", "ClipperRegistry");
