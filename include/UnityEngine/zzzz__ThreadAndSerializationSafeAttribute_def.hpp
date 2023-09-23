#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class ThreadAndSerializationSafeAttribute;
}
// Type: UnityEngine::ThreadAndSerializationSafeAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15861))
// CS Name: UnityEngine.ThreadAndSerializationSafeAttribute
class CORDL_TYPE ThreadAndSerializationSafeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadAndSerializationSafeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: " const&", def_value: None }]
constexpr ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadAndSerializationSafeAttribute", modifiers: "&&", def_value: None }]
constexpr ThreadAndSerializationSafeAttribute(ThreadAndSerializationSafeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadAndSerializationSafeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ThreadAndSerializationSafeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadAndSerializationSafeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadAndSerializationSafeAttribute& operator=(ThreadAndSerializationSafeAttribute&& o) noexcept = default;
  constexpr ThreadAndSerializationSafeAttribute& operator=(ThreadAndSerializationSafeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ThreadAndSerializationSafeAttribute() ;

/// @brief Method .ctor addr 0x2ba0e88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ThreadAndSerializationSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ThreadAndSerializationSafeAttribute, "UnityEngine", "ThreadAndSerializationSafeAttribute");
