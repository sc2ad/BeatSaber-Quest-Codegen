#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Timeline {
class IInterval;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeElement;
}
// Type: UnityEngine.Timeline::RuntimeElement
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14095))
// CS Name: UnityEngine.Timeline.RuntimeElement
class CORDL_TYPE RuntimeElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Timeline::IInterval
constexpr operator  UnityEngine::Timeline::IInterval() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: " const&", def_value: None }]
constexpr RuntimeElement(RuntimeElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeElement", modifiers: "&&", def_value: None }]
constexpr RuntimeElement(RuntimeElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeElement& operator=(RuntimeElement&& o) noexcept = default;
  constexpr RuntimeElement& operator=(RuntimeElement const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__intervalBit_k__BackingField, put=__set__intervalBit_k__BackingField))  _intervalBit_k__BackingField;

constexpr void __set__intervalBit_k__BackingField(int32_t value) ;

constexpr int32_t __get__intervalBit_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_intervalStart))  intervalStart;

 int64_t __declspec(property(get=get_intervalEnd))  intervalEnd;

 int32_t __declspec(property(get=get_intervalBit, put=set_intervalBit))  intervalBit;

 bool __declspec(property(put=set_enable))  enable;


// Methods

/// @brief Method get_intervalStart addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_intervalStart() ;

/// @brief Method get_intervalEnd addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_intervalEnd() ;

/// @brief Method get_intervalBit addr 0x2acf728 size 0x8 virtual false final false
 int32_t get_intervalBit() ;

/// @brief Method set_intervalBit addr 0x2acf730 size 0x8 virtual false final false
 void set_intervalBit(int32_t value) ;

/// @brief Method set_enable addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_enable(bool value) ;

/// @brief Method EvaluateAt addr 0x0 size 0xffffffffffffffff virtual true final false
 void EvaluateAt(double_t localTime, UnityEngine::Playables::FrameData frameData) ;

/// @brief Method DisableAt addr 0x0 size 0xffffffffffffffff virtual true final false
 void DisableAt(double_t localTime, double_t rootDuration, UnityEngine::Playables::FrameData frameData) ;

static UnityEngine::Timeline::RuntimeElement New_ctor() ;

/// @brief Method .ctor addr 0x2acedc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::RuntimeElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeElement, "UnityEngine.Timeline", "RuntimeElement");
