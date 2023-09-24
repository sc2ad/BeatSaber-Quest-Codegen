#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferOwners;
}
// Type: ::CommandBufferOwners
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15300))
// CS Name: CommandBufferOwners
class CORDL_TYPE CommandBufferOwners : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CommandBufferOwners() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: " const&", def_value: None }]
constexpr CommandBufferOwners(CommandBufferOwners const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: "&&", def_value: None }]
constexpr CommandBufferOwners(CommandBufferOwners&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandBufferOwners(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommandBufferOwners& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandBufferOwners& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandBufferOwners& operator=(CommandBufferOwners&& o) noexcept = default;
  constexpr CommandBufferOwners& operator=(CommandBufferOwners const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<UnityEngine::Object> __declspec(property(get=__get__owners, put=__set__owners))  _owners;

constexpr void __set__owners(System::Collections::Generic::HashSet_1<UnityEngine::Object> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::Object> __get__owners() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get_commandBuffer, put=__set_commandBuffer))  commandBuffer;

constexpr void __set_commandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get_commandBuffer() const;


// Properties

 int32_t __declspec(property(get=get_NumberOfOwners))  NumberOfOwners;


// Methods

/// @brief Method AddOwner addr 0x2675ed0 size 0xa0 virtual false final false
 void AddOwner(UnityEngine::Object owner) ;

/// @brief Method RemoveOwner addr 0x2675c1c size 0x60 virtual false final false
 void RemoveOwner(UnityEngine::Object owner) ;

/// @brief Method ContainsOwner addr 0x2675e78 size 0x58 virtual false final false
 bool ContainsOwner(UnityEngine::Object owner) ;

/// @brief Method get_NumberOfOwners addr 0x2675c7c size 0x48 virtual false final false
 int32_t get_NumberOfOwners() ;

static GlobalNamespace::CommandBufferOwners New_ctor() ;

/// @brief Method .ctor addr 0x2675f70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CommandBufferOwners);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferOwners, "", "CommandBufferOwners");
