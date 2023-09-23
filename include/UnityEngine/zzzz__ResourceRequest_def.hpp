#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class ResourceRequest;
}
// Type: UnityEngine::ResourceRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10203))
// CS Name: UnityEngine.ResourceRequest
class CORDL_TYPE ResourceRequest : public UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ResourceRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: " const&", def_value: None }]
constexpr ResourceRequest(ResourceRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: "&&", def_value: None }]
constexpr ResourceRequest(ResourceRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceRequest(void* ptr) noexcept : UnityEngine::AsyncOperation(ptr) {
}


  constexpr ResourceRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceRequest& operator=(ResourceRequest&& o) noexcept = default;
  constexpr ResourceRequest& operator=(ResourceRequest const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Path, put=__set_m_Path))  m_Path;

constexpr void __set_m_Path(::StringW value) ;

constexpr ::StringW __get_m_Path() const;

 System::Type __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(System::Type value) ;

constexpr System::Type __get_m_Type() const;


// Properties

 UnityEngine::Object __declspec(property(get=get_asset))  asset;


// Methods

/// @brief Method GetResult addr 0x2b67984 size 0xc virtual true final false
 UnityEngine::Object GetResult() ;

/// @brief Method get_asset addr 0x2b67a08 size 0xc virtual false final false
 UnityEngine::Object get_asset() ;

// Ctor Parameters []
explicit ResourceRequest() ;

/// @brief Method .ctor addr 0x2b67a14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceRequest, "UnityEngine", "ResourceRequest");
