#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
// Type: HoudiniEngineUnity::HEU_VertexEntry
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9777))
// CS Name: HoudiniEngineUnity.HEU_VertexEntry
class CORDL_TYPE HEU_VertexEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_VertexEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: " const&", def_value: None }]
constexpr HEU_VertexEntry(HEU_VertexEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "&&", def_value: None }]
constexpr HEU_VertexEntry(HEU_VertexEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VertexEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_VertexEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VertexEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VertexEntry& operator=(HEU_VertexEntry&& o) noexcept = default;
  constexpr HEU_VertexEntry& operator=(HEU_VertexEntry const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__meshKey, put=__set__meshKey))  _meshKey;

constexpr void __set__meshKey(int32_t value) ;

constexpr int32_t __get__meshKey() const;

 int32_t __declspec(property(get=__get__vertexIndex, put=__set__vertexIndex))  _vertexIndex;

constexpr void __set__vertexIndex(int32_t value) ;

constexpr int32_t __get__vertexIndex() const;

 int32_t __declspec(property(get=__get__normalIndex, put=__set__normalIndex))  _normalIndex;

constexpr void __set__normalIndex(int32_t value) ;

constexpr int32_t __get__normalIndex() const;


// Methods

// Ctor Parameters [CppParam { name: "meshKey", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "normalIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit HEU_VertexEntry(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex) ;

/// @brief Method .ctor addr 0x2051a34 size 0x3c virtual false final false
 void _ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VertexEntry);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VertexEntry, "HoudiniEngineUnity", "HEU_VertexEntry");
