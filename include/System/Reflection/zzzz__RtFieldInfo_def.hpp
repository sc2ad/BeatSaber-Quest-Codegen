#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class Binder;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection {
class RtFieldInfo;
}
// Type: System.Reflection::RtFieldInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3512))
// CS Name: System.Reflection.RtFieldInfo
class CORDL_TYPE RtFieldInfo : public System::Reflection::FieldInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RtFieldInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RtFieldInfo", modifiers: " const&", def_value: None }]
constexpr RtFieldInfo(RtFieldInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RtFieldInfo", modifiers: "&&", def_value: None }]
constexpr RtFieldInfo(RtFieldInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RtFieldInfo(void* ptr) noexcept : System::Reflection::FieldInfo(ptr) {
}


  constexpr RtFieldInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RtFieldInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RtFieldInfo& operator=(RtFieldInfo&& o) noexcept = default;
  constexpr RtFieldInfo& operator=(RtFieldInfo const& o) noexcept = default;
                


// Methods

/// @brief Method UnsafeGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType UnsafeGetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method UnsafeSetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnsafeSetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, System::Globalization::CultureInfo culture) ;

/// @brief Method CheckConsistency addr 0x0 size 0xffffffffffffffff virtual true final false
 void CheckConsistency(::bs_hook::Il2CppWrapperType target) ;

static System::Reflection::RtFieldInfo New_ctor() ;

/// @brief Method .ctor addr 0x2385a80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::RtFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RtFieldInfo, "System.Reflection", "RtFieldInfo");
