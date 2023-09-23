#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSetClassTypeToNullOnScheduleAttribute;
}
// Type: Unity.Collections.LowLevel.Unsafe::NativeSetClassTypeToNullOnScheduleAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9967))
// CS Name: Unity.Collections.LowLevel.Unsafe.NativeSetClassTypeToNullOnScheduleAttribute
class CORDL_TYPE NativeSetClassTypeToNullOnScheduleAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeSetClassTypeToNullOnScheduleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSetClassTypeToNullOnScheduleAttribute", modifiers: " const&", def_value: None }]
constexpr NativeSetClassTypeToNullOnScheduleAttribute(NativeSetClassTypeToNullOnScheduleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeSetClassTypeToNullOnScheduleAttribute", modifiers: "&&", def_value: None }]
constexpr NativeSetClassTypeToNullOnScheduleAttribute(NativeSetClassTypeToNullOnScheduleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeSetClassTypeToNullOnScheduleAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NativeSetClassTypeToNullOnScheduleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeSetClassTypeToNullOnScheduleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeSetClassTypeToNullOnScheduleAttribute& operator=(NativeSetClassTypeToNullOnScheduleAttribute&& o) noexcept = default;
  constexpr NativeSetClassTypeToNullOnScheduleAttribute& operator=(NativeSetClassTypeToNullOnScheduleAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute);
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeSetClassTypeToNullOnScheduleAttribute, "Unity.Collections.LowLevel.Unsafe", "NativeSetClassTypeToNullOnScheduleAttribute");
