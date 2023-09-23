#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferBase;
}
// Type: HoudiniEngineUnity::HEU_LoadBufferBase
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9745))
// CS Name: HoudiniEngineUnity.HEU_LoadBufferBase
class CORDL_TYPE HEU_LoadBufferBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_LoadBufferBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: " const&", def_value: None }]
constexpr HEU_LoadBufferBase(HEU_LoadBufferBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferBase", modifiers: "&&", def_value: None }]
constexpr HEU_LoadBufferBase(HEU_LoadBufferBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_LoadBufferBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_LoadBufferBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_LoadBufferBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_LoadBufferBase& operator=(HEU_LoadBufferBase&& o) noexcept = default;
  constexpr HEU_LoadBufferBase& operator=(HEU_LoadBufferBase const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 bool __declspec(property(get=__get__bInstanced, put=__set__bInstanced))  _bInstanced;

constexpr void __set__bInstanced(bool value) ;

constexpr bool __get__bInstanced() const;

 bool __declspec(property(get=__get__bInstancer, put=__set__bInstancer))  _bInstancer;

constexpr void __set__bInstancer(bool value) ;

constexpr bool __get__bInstancer() const;

 HoudiniEngineUnity::HEU_GeneratedOutput __declspec(property(get=__get__generatedOutput, put=__set__generatedOutput))  _generatedOutput;

constexpr void __set__generatedOutput(HoudiniEngineUnity::HEU_GeneratedOutput value) ;

constexpr HoudiniEngineUnity::HEU_GeneratedOutput __get__generatedOutput() const;


// Methods

/// @brief Method InitializeBuffer addr 0x203a364 size 0x1c virtual false final false
 void InitializeBuffer(int32_t id, ::StringW name, bool bInstanced, bool bInstancer) ;

// Ctor Parameters []
explicit HEU_LoadBufferBase() ;

/// @brief Method .ctor addr 0x203a380 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_LoadBufferBase);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_LoadBufferBase, "HoudiniEngineUnity", "HEU_LoadBufferBase");
