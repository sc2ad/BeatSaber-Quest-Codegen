#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace Assets::OVR::Scripts {
class RangedRecord;
}
// Type: Assets.OVR.Scripts::RangedRecord
namespace Assets::OVR::Scripts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9514))
// CS Name: Assets.OVR.Scripts.RangedRecord
class CORDL_TYPE RangedRecord : public ::Assets::OVR::Scripts::Record {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RangedRecord() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: " const&", def_value: None }]
constexpr RangedRecord(RangedRecord const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangedRecord", modifiers: "&&", def_value: None }]
constexpr RangedRecord(RangedRecord&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangedRecord(void* ptr) noexcept : ::Assets::OVR::Scripts::Record(ptr) {
}


  constexpr RangedRecord& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangedRecord& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangedRecord& operator=(RangedRecord&& o) noexcept = default;
  constexpr RangedRecord& operator=(RangedRecord const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;


// Methods

// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cat", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "val", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minVal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxVal", ty: "float_t", modifiers: "", def_value: None }]
explicit RangedRecord(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) ;

/// @brief Method .ctor addr 0x266a938 size 0x60 virtual false final false
 void _ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Assets::OVR::Scripts
} // end anonymous namespace
NEED_NO_BOX(::Assets::OVR::Scripts::RangedRecord);
DEFINE_IL2CPP_ARG_TYPE(::Assets::OVR::Scripts::RangedRecord, "Assets.OVR.Scripts", "RangedRecord");
