#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization {
class FixupHolder;
}
// Type: System.Runtime.Serialization::FixupHolder
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3215))
// CS Name: System.Runtime.Serialization.FixupHolder
class CORDL_TYPE FixupHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FixupHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: " const&", def_value: None }]
constexpr FixupHolder(FixupHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixupHolder", modifiers: "&&", def_value: None }]
constexpr FixupHolder(FixupHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixupHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixupHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixupHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixupHolder& operator=(FixupHolder&& o) noexcept = default;
  constexpr FixupHolder& operator=(FixupHolder const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_id, put=__set_m_id))  m_id;

constexpr void __set_m_id(int64_t value) ;

constexpr int64_t __get_m_id() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_fixupInfo, put=__set_m_fixupInfo))  m_fixupInfo;

constexpr void __set_m_fixupInfo(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_fixupInfo() const;

 int32_t __declspec(property(get=__get_m_fixupType, put=__set_m_fixupType))  m_fixupType;

constexpr void __set_m_fixupType(int32_t value) ;

constexpr int32_t __get_m_fixupType() const;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "fixupInfo", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "fixupType", ty: "int32_t", modifiers: "", def_value: None }]
explicit FixupHolder(int64_t id, ::bs_hook::Il2CppWrapperType fixupInfo, int32_t fixupType) ;

/// @brief Method .ctor addr 0x234ff20 size 0x3c virtual false final false
 void _ctor(int64_t id, ::bs_hook::Il2CppWrapperType fixupInfo, int32_t fixupType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::FixupHolder);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FixupHolder, "System.Runtime.Serialization", "FixupHolder");
