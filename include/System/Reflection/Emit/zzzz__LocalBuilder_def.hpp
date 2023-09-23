#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__LocalVariableInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection::Emit {
class ILGenerator;
}
// Forward declare root types
namespace System::Reflection::Emit {
class LocalBuilder;
}
// Type: System.Reflection.Emit::LocalBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3534))
// CS Name: System.Reflection.Emit.LocalBuilder
class CORDL_TYPE LocalBuilder : public System::Reflection::LocalVariableInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: " const&", def_value: None }]
constexpr LocalBuilder(LocalBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalBuilder", modifiers: "&&", def_value: None }]
constexpr LocalBuilder(LocalBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalBuilder(void* ptr) noexcept : System::Reflection::LocalVariableInfo(ptr) {
}


  constexpr LocalBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalBuilder& operator=(LocalBuilder&& o) noexcept = default;
  constexpr LocalBuilder& operator=(LocalBuilder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Reflection::Emit::ILGenerator __declspec(property(get=__get_ilgen, put=__set_ilgen))  ilgen;

constexpr void __set_ilgen(System::Reflection::Emit::ILGenerator value) ;

constexpr System::Reflection::Emit::ILGenerator __get_ilgen() const;

 int32_t __declspec(property(get=__get_startOffset, put=__set_startOffset))  startOffset;

constexpr void __set_startOffset(int32_t value) ;

constexpr int32_t __get_startOffset() const;

 int32_t __declspec(property(get=__get_endOffset, put=__set_endOffset))  endOffset;

constexpr void __set_endOffset(int32_t value) ;

constexpr int32_t __get_endOffset() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::LocalBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::LocalBuilder, "System.Reflection.Emit", "LocalBuilder");
