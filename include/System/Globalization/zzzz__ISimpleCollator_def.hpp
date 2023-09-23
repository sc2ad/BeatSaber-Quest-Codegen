#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class SortKey;
}
// Forward declare root types
namespace System::Globalization {
class ISimpleCollator;
}
// Type: System.Globalization::ISimpleCollator
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3696))
// CS Name: System.Globalization.ISimpleCollator
class CORDL_TYPE ISimpleCollator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISimpleCollator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISimpleCollator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetSortKey addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Globalization::SortKey GetSortKey(::StringW source, System::Globalization::CompareOptions options) ;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(::StringW s1, int32_t idx1, int32_t len1, ::StringW s2, int32_t idx2, int32_t len2, System::Globalization::CompareOptions options) ;

/// @brief Method IsPrefix addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsPrefix(::StringW src, ::StringW target, System::Globalization::CompareOptions opt) ;

/// @brief Method IsSuffix addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsSuffix(::StringW src, ::StringW target, System::Globalization::CompareOptions opt) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::StringW s, ::StringW target, int32_t start, int32_t length, System::Globalization::CompareOptions opt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::ISimpleCollator);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::ISimpleCollator, "System.Globalization", "ISimpleCollator");
